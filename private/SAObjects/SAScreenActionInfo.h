//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, NSURL;

@interface SAScreenActionInfo : SADomainObject
{
}

+ (id)infoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)info;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSURL *type;
@property(copy, nonatomic) NSURL *semanticId;
@property(copy, nonatomic) NSString *semanticData;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSArray *examples;
@property(copy, nonatomic) NSString *elementId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

