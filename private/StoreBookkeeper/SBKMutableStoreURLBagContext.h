//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreBookkeeper/SBKStoreURLBagContext.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext
{
}


// Remaining properties
@property(copy) NSString *domain; // @dynamic domain;
@property _Bool domainDisabled; // @dynamic domainDisabled;
@property double pollingIntervalInSeconds; // @dynamic pollingIntervalInSeconds;
@property(retain) NSURL *pullAllKeyValueRequestURL; // @dynamic pullAllKeyValueRequestURL;
@property(retain) NSURL *pullKeyValueRequestURL; // @dynamic pullKeyValueRequestURL;
@property(retain) NSURL *pushAllKeyValueRequestURL; // @dynamic pushAllKeyValueRequestURL;
@property(retain) NSURL *pushKeyValueRequestURL; // @dynamic pushKeyValueRequestURL;
@property(retain) NSURL *syncRequestURL; // @dynamic syncRequestURL;
@end

