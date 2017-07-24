//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

#import <ContactsUI/CNContactActionProtocol-Protocol.h>

@class CNPropertyGroupItem, NSArray;
@protocol CNPropertyActionDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyAction : CNContactAction <CNContactActionProtocol>
{
    NSArray *_propertyItems;
}

+ (void)performDefaultActionForItem:(id)arg1 sender:(id)arg2;
@property(copy, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
- (void).cxx_destruct;
- (void)presentDisambiguationAlertWithSender:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
@property(readonly, nonatomic) _Bool canPerformAction;
@property(readonly, nonatomic) CNPropertyGroupItem *propertyItem;
- (id)initWithContact:(id)arg1 propertyItem:(id)arg2;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <CNPropertyActionDelegate> delegate; // @dynamic delegate;

@end

