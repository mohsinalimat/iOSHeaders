//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKChatItem.h>

@class CALayer;
@protocol CKTypingIndicatorLayerProtocol;

@interface CKTypingChatItem : CKChatItem
{
}

@property(readonly, nonatomic) CALayer<CKTypingIndicatorLayerProtocol> *indicatorLayer;
@property(readonly, nonatomic, getter=isFromMe) _Bool fromMe;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (_Bool)wantsDrawerLayout;
- (_Bool)displayDuringSend;
- (Class)cellClass;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets)contentInsets;

@end

