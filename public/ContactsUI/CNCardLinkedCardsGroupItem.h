//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNCardGroupItem.h>

@class CNContact;

__attribute__((visibility("hidden")))
@interface CNCardLinkedCardsGroupItem : CNCardGroupItem
{
    CNContact *_contact;
}

@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)initWithContact:(id)arg1;

@end

