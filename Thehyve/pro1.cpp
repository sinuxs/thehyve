// reading an entire binary file
//This Program is implemented by Sina Sameti @ Home :))
//My IranFCP Email Address is s.sameti@fcp.ir
//My Institute Pasteur of Iran Email Address is s_sameti@pasteur.ac.ir

#include <iostream>
#include <fstream>
using namespace std;
int main (int argc,char* argv[1]) {
  streampos size;
  char * memblock;
  ifstream file (argv[1], ios::in|ios::binary|ios::ate);
  if (file.is_open())
  {
    size = file.tellg();
    memblock = new char [size];
    file.seekg (0, ios::beg);
    file.read (memblock, size);
    file.close();
    cout << std::dec<< "entire file content is in memory .\n";
    delete[] memblock;
  }
  else  
   {
      cout <<endl << "Sorry!! This Program is Unable to open file please use correct Command form .\n"<< endl;
  cout <<endl<< "\t ||\\    ||  ||||||  \\         /  ||||||   ||))))"<< endl;
  cout << "\t || \\   ||  ||       \\       /   ||       ||))))"<< endl;
  cout << "\t ||  \\  ||  ||||||    \\     /    ||||||   ||\\"<< endl;
  cout << "\t ||   \\ ||  ||         \\   /     ||       || \\"<< endl;
  cout << "\t ||    \\||  ||||||      \\ /      ||||||   ||  \\"<< endl;
  cout << "\t  "<< endl;

cout <<endl<< "\t ||\\    ||  ||||||  \\         /  ||||||   ||))))"<< endl;
  cout << "\t || \\   ||  ||       \\       /   ||       ||))))"<< endl;
  cout << "\t ||  \\  ||  ||||||    \\     /    ||||||   ||\\"<< endl;
  cout << "\t ||   \\ ||  ||         \\   /     ||       || \\"<< endl;
  cout << "\t ||    \\||  ||||||      \\ /      ||||||   ||  \\"<< endl;
  cout << "\t  "<< endl;
  cout << "Execute Program via Command << ./thehyve.out input.bin >> to return you output.bin \n\n\n ";
  } 
      cout<< "This Program is implemented By Sina Sameti© for TheHyve Assignment on Fri October-11-2019\n\n";
  streampos begin,end;
  ifstream myfile (argv[1], ios::binary);
  begin = myfile.tellg();
  myfile.seekg (0, ios::end);
  end = myfile.tellg();
  myfile.close();
  if (end-begin != 0)
  cout << "size file in Decimal is: " << (end-begin) << " bytes.\n\n";
  if (end-begin != 0 )
  cout << "The Contents of Input.bin File"<<endl;
  unsigned char buffer[end-begin];

FILE *ptr;

ptr = fopen(argv[1],"rb");  // r for read, b for binary

fread(buffer,sizeof(buffer),1,ptr); // read [end-begin] bytes to our buffer
for(int i = 0; i<10; i++)
if (buffer[i]==0)
        {
          printf("3F ");
         }
     else
    printf("%02x ", buffer[i]); // prints a series of bytes
    cout << endl<<endl;
  
  cout << "The Contents of Output.bin File"<<endl;

ptr = fopen(argv[1],"rb");  // r for read, b for binary

fread(buffer,sizeof(buffer),1,ptr); // read [end-begin] bytes to our buffer
for(int i = 0; i<10; i++)
    printf("%02x ", buffer[i]+1); // prints a series of bytes
    cout << endl<<endl<<" ©30NAsameti\n";
    fclose(ptr);
FILE *write_ptr;
    write_ptr = fopen("test.bin","wb");  // w for write, b for binary
      fwrite(buffer,sizeof(buffer),1,write_ptr); // write [end-begin] bytes from our buffer
fclose(write_ptr);
  return 0;
}
// Ever Tried, Ever Failed. No Matter, Try again, Fail again, Fail better.
//Yours Sincerely
//Sina