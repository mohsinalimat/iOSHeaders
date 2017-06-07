//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest
{
    NSMutableArray *_resultChangedNotifications;
    _Bool _wantsChanges;
    _Bool _moreComing;
    unsigned long long _resultsLimit;
    NSData *_resultServerChangeTokenData;
    NSData *_serverChangeTokenData;
}

@property(retain, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property(nonatomic) _Bool moreComing; // @synthesize moreComing=_moreComing;
@property(retain, nonatomic) NSData *resultServerChangeTokenData; // @synthesize resultServerChangeTokenData=_resultServerChangeTokenData;
@property(nonatomic) _Bool wantsChanges; // @synthesize wantsChanges=_wantsChanges;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, nonatomic) NSArray *resultChangedNotifications; // @synthesize resultChangedNotifications=_resultChangedNotifications;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithServerChangeTokenData:(id)arg1;

@end

