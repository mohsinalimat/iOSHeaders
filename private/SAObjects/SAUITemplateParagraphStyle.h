//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAUITemplateParagraphStyle : AceObject <SAAceSerializable>
{
}

+ (id)paragraphStyleWithDictionary:(id)arg1 context:(id)arg2;
+ (id)paragraphStyle;
@property(copy, nonatomic) NSNumber *tailIndent;
@property(copy, nonatomic) NSNumber *paragraphSpacing;
@property(copy, nonatomic) NSNumber *minimumLineHeight;
@property(copy, nonatomic) NSNumber *maximumLineHeight;
@property(copy, nonatomic) NSNumber *lineSpacing;
@property(copy, nonatomic) NSNumber *lineHeightMultiple;
@property(copy, nonatomic) NSNumber *headIndent;
@property(copy, nonatomic) NSNumber *getParagraphSpacingBefore;
@property(copy, nonatomic) NSNumber *firstLineHeadIndent;
@property(copy, nonatomic) NSString *alignment;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

