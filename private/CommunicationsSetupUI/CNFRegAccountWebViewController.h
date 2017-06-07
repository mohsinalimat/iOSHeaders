//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegServerWebViewController.h>

@class NSTimer;

@interface CNFRegAccountWebViewController : CNFRegServerWebViewController
{
    _Bool _failedBagLoad;
    _Bool _listeningForBagLoad;
    NSTimer *_bagLoadTimer;
}

@property(nonatomic) _Bool failedBagLoad; // @synthesize failedBagLoad=_failedBagLoad;
- (void).cxx_destruct;
- (id)authTokenHeaderValue;
- (id)authIdHeaderValue;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)cancelTapped;
- (id)bagKey;
- (id)clientInfoHeaderValue;
- (id)interfaceLayoutHeaderValue;
- (id)serviceHeaderValue;
- (id)pushTokenHeaderValue;
- (id)securityHeaderValue;
- (id)viewPortHeaderValue;
- (id)_viewPortForNormalPresentation;
- (id)_viewPortForFormSheetPresentation;
- (id)_nonModalParentController;
- (id)_viewPortStringForSize:(struct CGSize)arg1;
- (void)_showGenericErrorWithHandler;
- (void)_stopListeningForBagLoad;
- (void)_startListeningForBagLoad;
- (void)_handleFTServerBagFinishedLoading;
- (void)_stopBagLoadTimer;
- (void)_startBagLoadTimer;
- (void)_bagLoadTimeout:(id)arg1;
- (void)_showURLDidNotLoadAlert;
- (_Bool)_loadURLFromBag;
- (void)_reloadDelayed;
- (void)_stopCurrentReload;
- (void)_reload;
- (_Bool)canSendURLRequest:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (_Bool)shouldSetHeadersForRequest:(id)arg1;
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)logName;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithRegController:(id)arg1;

@end

