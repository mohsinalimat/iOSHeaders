//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFMailMessage.h>

#import <MessageUI/UIItemProviderWriting-Protocol.h>

@class NSArray, NSString;

@interface MFMailMessage (UIItemProvider) <UIItemProviderWriting>
+ (_Bool)dragItemsAreAllMessages:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
- (void)_loadMessageDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_attributedSubject;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@end

