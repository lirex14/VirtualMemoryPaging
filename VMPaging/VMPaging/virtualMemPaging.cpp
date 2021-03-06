// Aiyu Cui
// Rex Li
// Weiming Shan

#include "memoryManager.hpp"
#include "virtualMemoryManagerInterface.hpp"

/*
int main()
{
	//	memoryManager(ReplacementPolicy p, unsigned int pS, unsigned int nF, unsigned int vA) :
	//virtualMemoryManagerInterface(ReplacementPolicy p, unsigned int pS, unsigned int nF, unsigned int vA) : policy(p), N(pS), numFrames(nF), virtualAddressSpaceSize(vA) {
		//assert(virtualAddressSpaceSize > N);
		//assert(pow(2, virtualAddressSpaceSize) > numFrames * pow(2, N));
	
	int phyAdd[12];
	for (int i = 0; i < 12; i++) {
		phyAdd[i] = rand() % 65536; //== 2^16, size of virtual memory
	}
	memoryManager mem1(FIFO, 12, 4, 16); 
	memoryManager mem2(LRU, 12, 4, 16);

	cout << "Init memoryMemanger successfully" << endl;
	//4KB page size => 12 bits page address, 4 frames, 16KB physical address space, 14bits physical address, 2^16 virtual address space

	for (int i = 0; i < 12; i++)
	{
		cout << i << endl;
		cout << "input: " << phyAdd[i] << endl;
		int c = mem1.memoryAccess(phyAdd[i]);
		cout << "output: " << c << endl << endl;

	}
	int temp = mem1.numberPageSwaps();
	
	cout << "Number of page swaps ";
	cout << temp << "\n"; 
	//mem1.freeMem();
	cin >> temp;

	return 0;
}
*/