//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAIntentGroupLabelTemplateComponent : SADomainObject
{
}

+ (id)labelTemplateComponentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)labelTemplateComponent;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *labelTemplateComponentStyle;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

