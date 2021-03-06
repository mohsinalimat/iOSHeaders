//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <TemplateKit/TLKObservable-Protocol.h>

@class NSString, TLKImage, TLKObserver;

@interface TLKImageView : UIImageView <TLKObservable>
{
    TLKImage *_tlkImage;
    unsigned long long _style;
    TLKObserver *_imageObserver;
}

@property(retain) TLKObserver *imageObserver; // @synthesize imageObserver=_imageObserver;
@property unsigned long long style; // @synthesize style=_style;
@property(retain) TLKImage *tlkImage; // @synthesize tlkImage=_tlkImage;
- (void).cxx_destruct;
- (void)dealloc;
- (id)observableProperties;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateImageView;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

