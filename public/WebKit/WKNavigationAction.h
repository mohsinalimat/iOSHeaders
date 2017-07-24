//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURL, NSURLRequest, WKFrameInfo, _WKUserInitiatedAction;

@interface WKNavigationAction : NSObject <WKObject>
{
    struct ObjectStorage<API::NavigationAction> _navigationAction;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) struct CGPoint _clickLocationInRootViewCoordinates;
@property(readonly, nonatomic) long long _syntheticClickType;
@property(readonly, copy, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic) long long navigationType;
@property(readonly, copy, nonatomic) WKFrameInfo *targetFrame;
@property(readonly, copy, nonatomic) WKFrameInfo *sourceFrame;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic) _WKUserInitiatedAction *_userInitiatedAction;
@property(readonly, nonatomic) _Bool _shouldOpenExternalURLs;
@property(readonly, nonatomic) _Bool _shouldOpenAppLinks;
@property(readonly, nonatomic) _Bool _shouldOpenExternalSchemes;
@property(readonly, nonatomic) _Bool _canHandleRequest;
@property(readonly, nonatomic, getter=_isUserInitiated) _Bool _userInitiated;
@property(readonly, nonatomic) NSURL *_originalURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

