//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface FLApprovedItemsFilter : NSObject
{
    NSSet *_approvedItemIdentifiers;
    NSSet *_approvedClientIdentifiers;
}

+ (id)sharedFilter;
- (void).cxx_destruct;
- (unsigned long long)approvalStatusForItem:(id)arg1;

@end

