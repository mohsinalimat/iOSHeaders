//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ABPersonLinker : NSObject
{
    void *_addressBook;
    NSMutableDictionary *_peopleByFirstName;
    NSMutableDictionary *_peopleByLastName;
    NSMutableDictionary *_peopleByOrganization;
}

+ (void)startAutoLinkingNewPeopleInAddressBook:(void *)arg1 inProcess:(_Bool)arg2;
+ (_Bool)isLinkDataValidForAddressBook:(void *)arg1;
+ (_Bool)isAutoLinkingEnabled;
- (void)linkNewlyAddedPerson:(void *)arg1;
- (void)linkRecentlyAddedPeople;
- (_Bool)linkRecentlyAddedPeopleWithLimit:(long long)arg1;
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)arg1 withLimit:(long long)arg2;
- (void)makeInitialLinks;
- (void)makeInitialLinksCountingOuterIterations:(unsigned long long *)arg1;
- (void)removeAllLinks;
- (void)makeLinksForAddedPeople:(id)arg1 inInitialLinking:(_Bool)arg2 countingOuterIterations:(unsigned long long *)arg3 detectedLinkCount:(unsigned long long *)arg4;
- (void)presortPeople:(id)arg1;
- (void)addPerson:(void *)arg1 toDictionary:(id)arg2 withProperty:(int)arg3;
- (id)suggestedPeopleToLinkWithPerson:(void *)arg1 isInitialLinking:(_Bool)arg2;
- (_Bool)shouldLinkPerson:(void *)arg1 toPeopleInDatabase:(id)arg2 andNewlyAddedPeople:(id)arg3 inInitialLinking:(_Bool)arg4;
- (id)otherPeopleInArray:(id)arg1 matchingPerson:(void *)arg2;
- (id)otherPeopleInDatabaseMatchingPerson:(void *)arg1 notIncludingPeople:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithAddressBook:(void *)arg1;

@end

