//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface BLEduCloudContainer : NSObject
{
    NSURL *_documentsURL;
    id _cloudToken;
    NSURL *_containerURL;
    NSObject<OS_dispatch_queue> *_containerQueue;
}

+ (id)sharedEduCloudContainer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *containerQueue; // @synthesize containerQueue=_containerQueue;
@property(retain, nonatomic) NSURL *containerURL; // @synthesize containerURL=_containerURL;
@property(retain, nonatomic) id cloudToken; // @synthesize cloudToken=_cloudToken;
- (void).cxx_destruct;
- (id)bookItemsForPermlinks:(id)arg1;
- (id)bookItemForPermlink:(id)arg1;
- (id)bookItemForPath:(id)arg1;
- (id)performMetadataActionOnCloudURL:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)allBookItems;
- (_Bool)updateBookItem:(id)arg1 error:(id *)arg2;
- (_Bool)addBookItem:(id)arg1 error:(id *)arg2;
- (_Bool)removeBookItem:(id)arg1 error:(id *)arg2;
- (_Bool)_coordinatedReadOfPromisesWithError:(id *)arg1;
- (_Bool)_addOrUpdateCloudEntryWithDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)_writePlist:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)cloudUrlForPermlink:(id)arg1;
- (id)fileNameForPermlink:(id)arg1;
- (id)dictionaryAsBookItem:(id)arg1 path:(id)arg2;
@property(readonly, nonatomic) NSURL *documentsURL; // @synthesize documentsURL=_documentsURL;
- (_Bool)isSignedIn;
- (id)init;

@end

