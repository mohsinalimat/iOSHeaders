//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIFullscreenImageViewElement;

@interface SKUILockupViewElement : SKUIViewElement
{
    BOOL _enabled;
    long long _lockupViewType;
    _Bool _selectable;
}

@property(readonly, nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
@property(readonly, nonatomic) long long lockupViewType; // @synthesize lockupViewType=_lockupViewType;
- (long long)pageComponentType;
- (_Bool)isEnabled;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIFullscreenImageViewElement *fullscreenImage;
@property(readonly, nonatomic) _Bool containsElementGroups;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

