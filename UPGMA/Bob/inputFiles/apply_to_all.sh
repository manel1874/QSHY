#!/bin/bash
for number in {0..99}
do
./aligned_dna2binary.sh Sequence_"$number".txt
done

 