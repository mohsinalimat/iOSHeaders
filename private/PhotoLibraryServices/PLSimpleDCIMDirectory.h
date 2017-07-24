//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSMutableIndexSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface PLSimpleDCIMDirectory : NSObject
{
    NSURL *_baseURL;
    NSString *_subDirSuffix;
    unsigned long long _directoryLimit;
    NSFileManager *_fileManager;
    NSMutableIndexSet *_availableFileNameNumbers;
    NSURL *_currentSubDirectory;
    unsigned long long _currentSubDirectoryNumber;
    NSString *_userInfoPath;
    _Bool _hasLoadedUserInfo;
    _Bool _representsCameraRoll;
    NSObject<OS_dispatch_queue> *_isolation;
}

+ (id)cloudPlistName;
+ (id)cameraRollPlistName;
+ (id)migrateOldPlistToNewPlist:(id)arg1;
@property(readonly, retain) NSURL *directoryURL; // @synthesize directoryURL=_baseURL;
@property _Bool representsCameraRoll; // @synthesize representsCameraRoll=_representsCameraRoll;
- (void)reset;
- (id)nextAvailableFileURLWithExtension:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned long long)arg3 userInfoPath:(id)arg4;
- (_Bool)_ensureDirectoryExists:(id)arg1;
- (void)_loadUserInfoLastDirectoryNumber:(id *)arg1 lastFileNumber:(id *)arg2;
- (void)_saveUserInfo;
- (struct _NSRange)fileNameNumberRangeForDirNumber:(unsigned long long)arg1;
- (id)availableFileNameNumbersInDirNumber:(unsigned long long)arg1;
- (id)subDirURLForNumber:(unsigned long long)arg1 create:(_Bool)arg2 didCreate:(_Bool *)arg3;
@property(readonly, retain, nonatomic) NSURL *currentSubDirectory;

@end

