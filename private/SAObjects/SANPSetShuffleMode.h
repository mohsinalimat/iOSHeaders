//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SANPSetShuffleMode : SADomainCommand
{
}

+ (id)setShuffleModeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setShuffleMode;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *shuffleMode;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

