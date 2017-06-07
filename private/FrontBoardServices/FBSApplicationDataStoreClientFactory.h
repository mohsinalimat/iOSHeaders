//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol FBSApplicationDataStoreRepositoryClient, OS_dispatch_queue;

@interface FBSApplicationDataStoreClientFactory : NSObject
{
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_queue;
    id <FBSApplicationDataStoreRepositoryClient> _sharedClient;
    Class _dataStoreClientClass;
    NSArray *_prefetchedKeys;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *prefetchedKeys; // @synthesize prefetchedKeys=_prefetchedKeys;
- (void)registerClientClass:(Class)arg1;
- (void)checkin;
- (id)checkout;
- (void)dealloc;
- (id)init;

@end

