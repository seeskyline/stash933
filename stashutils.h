BOOL isSymbolicLink(NSString *path);
bool isExecutable(NSString *path);
int run_cmd(const char *cmd, const char **argv);
NSString *outputFromCommand(NSString *command, NSArray *arguments);
bool copyFile(NSString *origPath, NSString *newPath);
bool deleteFile(NSString *path, int required);
bool linkFile(NSString *target, NSString *linkName);
NSString *humanReadableFileSize(double convertedValue);
bool stashFile(NSString *origPath, NSString *stashPath);
bool copyPermissions(NSString *linkPath, NSString *stashPath);
bool fileNameIsOk(NSString *fileName);
bool deStashFile(NSString *origPath, NSString *stashPath);