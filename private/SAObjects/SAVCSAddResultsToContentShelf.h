//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUIAddContentToView.h>

@class NSArray, NSString;

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView
{
}

+ (id)addResultsToContentShelfWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addResultsToContentShelf;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *results;
@property(nonatomic) long long pageNumber;
@property(copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property(copy, nonatomic) NSString *contentShelfViewId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
