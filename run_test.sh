#!/bin/bash -
#===============================================================================
#
#          FILE: run_test.sh
#
#         USAGE: ./run_test.sh
#
#   DESCRIPTION: 
#
#       OPTIONS: ---
#  REQUIREMENTS: ---
#          BUGS: ---
#         NOTES: ---
#        AUTHOR: YOUR NAME (), 
#  ORGANIZATION: 
#       CREATED: 2018年04月23日 20时47分45秒
#      REVISION:  ---
#===============================================================================

set -o nounset                              # Treat unset variables as an error

P_N=$1
BIN_PATH=test/test${P_N}
SRC_FILE=`ls ./cpp/ | grep ${P_N}`
#echo $SRC_FILE 
# TEST_DIR=$(test_dir)
# SRC_FILE=$(src_file)
# TEST_FILE=$(test_file)
make -f Makefile.test all src_file=$SRC_FILE test_dir=$BIN_PATH test_file=LintCode_test.cpp
TEST_INPUT=`ls ${BIN_PATH}/data*.txt `

echo "run test"
for test_u in ${TEST_INPUT[@]}
do
    echo "test file is : "$test_u 
    echo "result is :"
    ./${BIN_PATH}/test_hello < ${test_u} 2>&1
    echo "========================================="
done
echo "make clean"
make -f Makefile.test clean src_file=$SRC_FILE test_dir=$BIN_PATH test_file=LintCode_test.cpp


