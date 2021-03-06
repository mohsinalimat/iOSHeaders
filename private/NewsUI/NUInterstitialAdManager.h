//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAppConfigurationManager;
@protocol NUAdProvider, NUInterstitialAdManagerDelegate, NUPage;

@interface NUInterstitialAdManager : NSObject
{
    _Bool _enabled;
    id <NUInterstitialAdManagerDelegate> _delegate;
    id <NUPage> _activePage;
    id <NUAdProvider> _adProvider;
    FCAppConfigurationManager *_appConfigurationManager;
}

@property(readonly, nonatomic) FCAppConfigurationManager *appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(readonly, nonatomic) id <NUAdProvider> adProvider; // @synthesize adProvider=_adProvider;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <NUPage> activePage; // @synthesize activePage=_activePage;
@property(nonatomic) __weak id <NUInterstitialAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)triggerTimerChangesForActivePage:(id)arg1;
- (void)restartTimer;
- (void)cancelTimer;
- (void)loadInterstitial;
- (void)dealloc;
- (id)initWithAdProvider:(id)arg1 appConfigurationManager:(id)arg2;

@end

