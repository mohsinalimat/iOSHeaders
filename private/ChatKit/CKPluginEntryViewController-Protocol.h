//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class IMBalloonPluginDataSource, NSArray, NSData, NSString;
@protocol CKPluginEntryViewControllerDelegate, UICoordinateSpace;

@protocol CKPluginEntryViewController <NSObject>
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@optional
@property(readonly) _Bool loadedContentView;
@property(readonly) _Bool wantsEdgeToEdgeLayout;
@property(readonly) _Bool wantsClearButton;
- (NSArray *)framesOfVisibleContentViewInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (void)didFinishAnimatedBoundsChange;
- (void)willAnimateBoundsChange;
- (void)payloadWillSave;
- (void)payloadWillClear;
- (NSString *)payloadBundleID;
- (NSData *)payloadWillSend;
- (id)initWithDataSource:(IMBalloonPluginDataSource *)arg1 entryViewDelegate:(id <CKPluginEntryViewControllerDelegate>)arg2;
@end

