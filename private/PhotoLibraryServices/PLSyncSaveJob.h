//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSDate, NSNumber, NSSet, NSString, NSURL;

@interface PLSyncSaveJob : NSObject
{
    _Bool hasVideoComplement;
    _Bool isVideo;
    _Bool isSyncComplete;
    _Bool _cleanupSyncState;
    NSArray *facesInfo;
    NSURL *originalAssetURL;
    NSURL *videoComplementURL;
    NSString *uuid;
    NSDate *creationDate;
    NSDate *modificationDate;
    NSSet *albumURIs;
    CLLocation *location;
    NSNumber *sortToken;
    NSString *originalFileName;
    NSDate *_cleanupBeforeDate;
    CDUnknownBlockType _finishedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(copy, nonatomic) NSDate *cleanupBeforeDate; // @synthesize cleanupBeforeDate=_cleanupBeforeDate;
@property(nonatomic) _Bool cleanupSyncState; // @synthesize cleanupSyncState=_cleanupSyncState;
@property(nonatomic) _Bool isSyncComplete; // @synthesize isSyncComplete;
@property(retain, nonatomic) NSString *originalFileName; // @synthesize originalFileName;
@property(retain, nonatomic) NSNumber *sortToken; // @synthesize sortToken;
@property(copy, nonatomic) CLLocation *location; // @synthesize location;
@property(copy, nonatomic) NSSet *albumURIs; // @synthesize albumURIs;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo;
@property(nonatomic) _Bool hasVideoComplement; // @synthesize hasVideoComplement;
@property(retain, nonatomic) NSURL *videoComplementURL; // @synthesize videoComplementURL;
@property(retain, nonatomic) NSURL *originalAssetURL; // @synthesize originalAssetURL;
@property(retain, nonatomic) NSArray *facesInfo; // @synthesize facesInfo;
- (id)description;
- (void)processFacesWithBlock:(CDUnknownBlockType)arg1;
- (id)serializedData;
- (id)initFromSerializedData:(id)arg1;
- (void)dealloc;

@end

