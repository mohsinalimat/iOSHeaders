//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface _UITextAttachmentDrawingResizeView : UIView
{
    _Bool _top;
    _Bool _highlighted;
    _Bool _enabled;
    UIImageView *_knobView;
    UIView *_separatorView;
    UIView *_separatorHighlightedView;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIView *separatorHighlightedView; // @synthesize separatorHighlightedView=_separatorHighlightedView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *knobView; // @synthesize knobView=_knobView;
@property(nonatomic) _Bool top; // @synthesize top=_top;
- (void).cxx_destruct;
- (void)show:(_Bool)arg1 enabled:(_Bool)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic) _Bool shown;
- (double)resizeContentInset;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)init:(_Bool)arg1;

@end

