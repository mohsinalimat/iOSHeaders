//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CKConversation;

@interface CKTranscriptHeaderViewController : UIViewController
{
    _Bool _shouldInvalidateOnAddressBookChange;
    CKConversation *_conversation;
}

@property(readonly, nonatomic) _Bool shouldInvalidateOnAddressBookChange; // @synthesize shouldInvalidateOnAddressBookChange=_shouldInvalidateOnAddressBookChange;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (id)initWithConversation:(id)arg1;

@end

