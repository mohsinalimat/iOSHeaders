//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVPlayerViewControllerDelegate_WebKitOnly-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebAVPlayerViewControllerDelegate : NSObject <AVPlayerViewControllerDelegate_WebKitOnly>
{
    struct RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit> _fullscreenInterface;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)playerViewControllerFailedToStartPictureInPicture:(id)arg1 withError:(id)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
// Error parsing type for property fullscreenInterface:
// Property attributes: T^{WebVideoFullscreenInterfaceAVKit=^^?^^?{atomic<unsigned int>=AI}{Ref<WebCore::WebPlaybackSessionInterfaceAVKit>=^{WebPlaybackSessionInterfaceAVKit}}{RetainPtr<WebAVPlayerViewControllerDelegate>=^v}{RetainPtr<AVPlayerViewController>=^v}^{WebVideoFullscreenModel}^{WebVideoFullscreenChangeObserver}{RetainPtr<UIWindow>=^v}{RetainPtr<UIViewController>=^v}{RetainPtr<UIView>=^v}{RetainPtr<UIWindow>=^v}{RetainPtr<WebAVPlayerLayerView>=^v}I{Function<void (bool)>={unique_ptr<WTF::Function<void (bool)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (bool)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (bool)>::CallableWrapperBase> >=^{CallableWrapperBase}}}}{Timer<WebCore::WebVideoFullscreenInterfaceAVKit>=^^?{Ref<WTF::RunLoop>=^{RunLoop}}{RetainPtr<__CFRunLoopTimer *>=^v}^{WebVideoFullscreenInterfaceAVKit}}BBBBBBBB}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

