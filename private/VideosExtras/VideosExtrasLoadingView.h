//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosExtras/IKAppDocumentDelegate-Protocol.h>

@class IKAppDocument, NSDictionary, NSString, VideosExtrasActivityIndicator;
@protocol VideosExtrasLoadingViewDelegate;

@interface VideosExtrasLoadingView : UIView <IKAppDocumentDelegate>
{
    IKAppDocument *_document;
    NSDictionary *_options;
    VideosExtrasActivityIndicator *_activityIndicator;
    id <VideosExtrasLoadingViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (void)_show;
- (void)cancelCountdownToVisibility;
- (void)startCountdownToVisibilityWithInterval:(double)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

