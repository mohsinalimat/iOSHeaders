//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString, NSURL, SAEmail, SALocation, SAPhone;

@interface SAABPersonSearch : SADomainCommand
{
}

+ (id)personSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)personSearch;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *scope;
@property(copy, nonatomic) NSString *relationship;
@property(retain, nonatomic) SAPhone *phone;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSNumber *me;
@property(retain, nonatomic) SAEmail *email;
@property(copy, nonatomic) NSString *company;
@property(copy, nonatomic) NSDate *birthday;
@property(retain, nonatomic) SALocation *address;
@property(copy, nonatomic) NSURL *accountIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

