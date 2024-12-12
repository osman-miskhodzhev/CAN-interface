import os
import sys

os.system(f'g++ {sys.argv[-1]} -o {sys.argv[-1][:-4]}')
os.system(f'./{sys.argv[-1][:-4]}')
