//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLMediaElement.h>

@class NSString;

@interface DOMHTMLVideoElement : DOMHTMLMediaElement
{
}

- (void)webkitExitFullScreen;
- (void)webkitEnterFullScreen;
- (void)webkitExitFullscreen;
- (void)webkitEnterFullscreen;
@property(readonly) _Bool webkitDisplayingFullscreen;
@property(readonly) _Bool webkitSupportsFullscreen;
@property _Bool playsInline;
@property(copy) NSString *poster;
@property(readonly) unsigned int videoHeight;
@property(readonly) unsigned int videoWidth;
@property unsigned int height;
@property unsigned int width;

@end

