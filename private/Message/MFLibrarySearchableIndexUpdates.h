//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MFLibrarySearchableIndexUpdates : NSObject
{
    NSArray *_addedIndexItems;
    NSArray *_removedIdentifiers;
    NSArray *_removedDomainIdentifiers;
}

+ (id)updates;
@property(copy, nonatomic) NSArray *removedDomainIdentifiers; // @synthesize removedDomainIdentifiers=_removedDomainIdentifiers;
@property(copy, nonatomic) NSArray *removedIdentifiers; // @synthesize removedIdentifiers=_removedIdentifiers;
@property(copy, nonatomic) NSArray *addedIndexItems; // @synthesize addedIndexItems=_addedIndexItems;
- (id)description;
- (void)dealloc;

@end

