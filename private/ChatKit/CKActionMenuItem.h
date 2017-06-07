//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UILabel, UIView;
@protocol CKActionMenuItemView;

@interface CKActionMenuItem : NSObject
{
    _Bool _enabled;
    _Bool _highlighted;
    _Bool _selected;
    UIView<CKActionMenuItemView> *_view;
    UILabel<CKActionMenuItemView> *_label;
    id _target;
    SEL _action;
}

+ (void)animate:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)itemWithImageTemplate:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3 target:(id)arg4 action:(SEL)arg5;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) UILabel<CKActionMenuItemView> *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView<CKActionMenuItemView> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)sendAction;
- (void)updateForState:(long long)arg1 touchInside:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)init;
- (id)initWithView:(id)arg1 label:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)description;

@end

