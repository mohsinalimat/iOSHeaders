//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <iTunesStoreUI/SUDeferredUIView-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SUDeferredUIButton : UIButton <SUDeferredUIView>
{
    _Bool _deferredEnabled;
    struct CGRect _deferredFrame;
    NSMutableDictionary *_deferredImages;
    NSMutableDictionary *_deferredTitles;
    _Bool _isDeferringInterfaceUpdates;
}

- (void)_saveTitlesAsDeferred;
- (void)_saveImagesAsDeferred;
- (void)_saveCurrentStateAsDeferred;
- (void)_commitDeferredInterfaceUpdates;
- (id)titleForState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)imageForState:(unsigned long long)arg1;
- (_Bool)isEnabled;
- (struct CGRect)frame;
@property(nonatomic, getter=isDeferringInterfaceUpdates) _Bool deferringInterfaceUpdates;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

