//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class NSArray, NSMutableArray;

@interface ASMoveItemsTask : ASTask
{
    NSArray *_pushedMoveRequests;
    long long _dataclass;
    NSMutableArray *_moveItems;
}

@property(retain, nonatomic) NSMutableArray *moveItems; // @synthesize moveItems=_moveItems;
@property(nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(retain, nonatomic) NSArray *pushedMoveRequests; // @synthesize pushedMoveRequests=_pushedMoveRequests;
- (void).cxx_destruct;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (id)requestBody;
- (void)finishWithError:(id)arg1;
- (_Bool)processContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (void)addSourceID:(id)arg1 sourceFolder:(id)arg2 destinatonFolder:(id)arg3;
- (int)commandCode;

@end

