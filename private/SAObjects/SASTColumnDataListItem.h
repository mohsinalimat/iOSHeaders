//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTActionableTemplateItem-Protocol.h>

@class NSArray, NSString, SAUIDecoratedText, SAUINanoImageResource;
@protocol SASTTemplateAction;

@interface SASTColumnDataListItem : AceObject <SASTActionableTemplateItem>
{
}

+ (id)columnDataListItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)columnDataListItem;
@property(retain, nonatomic) SAUIDecoratedText *title;
@property(copy, nonatomic) NSString *rowLayout;
@property(retain, nonatomic) SAUINanoImageResource *imageResource;
@property(copy, nonatomic) NSArray *decoratedRows;
@property(retain, nonatomic) id <SASTTemplateAction> action; // @dynamic action;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

