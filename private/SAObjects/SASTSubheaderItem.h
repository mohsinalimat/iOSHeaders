//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTSubheaderItem : AceObject <SASTTemplateItem>
{
}

+ (id)subheaderItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)subheaderItem;
@property(retain, nonatomic) SAUIDecoratedText *rightText;
@property(retain, nonatomic) SAUIDecoratedText *leftText;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

