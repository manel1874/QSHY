#!/bin/bash
#small code to make binary from the DNA fasta sequence
echo "
    DNA_2_BINARY.sh - written by Abhijeet Singh (abhijeetsingh.aau@gmail.com) and adapted by Manuel B. Santos (manuel.batalha.santos@gmail.com)
    Translating DNA bases to 0 and 1
"

if [ "$#" -gt 0 ]; then
	filename=$1
else
	echo "please provide the name of your fasta file"
	read filename
fi
fasta_file=filename
sed "s/.\{10\}/&\n/" "${!fasta_file}" > "${!fasta_file}"_tabadded
cut -d ' ' -f1 "${!fasta_file}"_tabadded > "${!fasta_file}"_trimhead
awk 'BEGIN{RS="hCoV"}NR>1{sub("\n","\t"); gsub("\n",""); print RS$0}' "${!fasta_file}"_trimhead > "${!fasta_file}"_tab
awk '{print $1}' < "${!fasta_file}"_tab > "${!fasta_file}"_tab_col1
awk '{print $2}' < "${!fasta_file}"_tab > "${!fasta_file}"_tab_col2
echo "
-----------------------------------
The codes used for translation are:
    A=00
        T=11
            C=01
                G=10
                    -=00
                        N=00
-----------------------------------"
#sed 's/A/00/g;s/T/11/g;s/C/01/g;s/G/10/g;s/-/00/g' "${!fasta_file}"_tab_col2 > "${!fasta_file}"_tab_col2_2
sed 's/A/00/g;s/T/11/g;s/C/01/g;s/G/10/g;s/-/00/g;s/N/00/g' "${!fasta_file}"_tab_col2 > "${!fasta_file}"_tab_col2_2
#paste "${!fasta_file}"_tab_col1 "${!fasta_file}"_tab_col2_2 | column -s $'\n' -t > "${!fasta_file}"_binary.tmp.txt
#sed 's/\t/\n/g' < "${!fasta_file}"_binary.tmp.txt > "${!fasta_file}"_binary.txt
#rm -f "${!fasta_file}"{_trimhead,_tab,_tab_col1,_tab_col2,_tab_col2_2,_binary.tmp.txt}
sed 's/./\n&/2g' "${!fasta_file}"_tab_col2_2 > b_"${!fasta_file}"
python3 add_zeros.py 3712 b_"${!fasta_file}"

rm -f "${!fasta_file}"{_tabadded,_trimhead,_tab,_tab_col1,_tab_col2,_tab_col2_2}
echo "                            ========================="
echo "your result file is ---->>> ${!fasta_file}_binary.txt"
echo "                            ========================="
