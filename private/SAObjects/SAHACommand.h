//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SAHAFilter;

@interface SAHACommand : SADomainCommand
{
}

+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)command;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *serverValidity;
@property(retain, nonatomic) SAHAFilter *filter;
@property(copy, nonatomic) NSArray *actions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

