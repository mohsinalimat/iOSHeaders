//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol CKDOperationPipelining, CKDURLRequestPipelining, OS_dispatch_group, OS_dispatch_queue;

@interface CKDPipeliningInfo : NSObject
{
    id <CKDURLRequestPipelining> _request;
    id <CKDOperationPipelining> _operation;
    NSObject<OS_dispatch_group> *_perRequestCallbackGroup;
    NSObject<OS_dispatch_group> *_perRequestGroup;
    NSObject<OS_dispatch_queue> *_perRequestCallbackQueue;
    NSMutableArray *_perRequestCallbackBlocks;
}

@property(retain, nonatomic) NSMutableArray *perRequestCallbackBlocks; // @synthesize perRequestCallbackBlocks=_perRequestCallbackBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *perRequestCallbackQueue; // @synthesize perRequestCallbackQueue=_perRequestCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *perRequestGroup; // @synthesize perRequestGroup=_perRequestGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *perRequestCallbackGroup; // @synthesize perRequestCallbackGroup=_perRequestCallbackGroup;
@property(nonatomic) __weak id <CKDOperationPipelining> operation; // @synthesize operation=_operation;
@property(retain, nonatomic) id <CKDURLRequestPipelining> request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 operation:(id)arg2;

@end
