//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, OFUIViewController;

@interface OFUIScrollView : UIScrollView
{
    OFUIViewController *_viewControllerProxy;
    NSMutableArray *_draggingPasteboardTypes;
}

- (id)draggingPasteboardTypes;
- (void)unregisterAllDraggingPasteboardType;
- (void)registerDraggingPasteboardType:(id)arg1;
@property(nonatomic) OFUIViewController *viewControllerProxy; // @synthesize viewControllerProxy=_viewControllerProxy;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

@end

