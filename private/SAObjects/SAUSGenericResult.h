//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SAUIAppPunchOut, SAUIImageResource;

@interface SAUSGenericResult : SADomainObject
{
}

+ (id)genericResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)genericResult;
@property(copy, nonatomic) NSNumber *titleMaxLines;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SAUIImageResource *thumbnail;
@property(copy, nonatomic) NSString *secondaryTitle;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSArray *descriptions;
@property(nonatomic) _Bool centered;
@property(retain, nonatomic) SAUIAppPunchOut *actionButton;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

