//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UILabel, UIView, VPScannerView;

@interface VPScannerViewController : UIViewController
{
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _scannedCodeHandler;
    NSString *_titleMessage;
    UIButton *_cancelButton;
    UIButton *_pairManuallyButton;
    VPScannerView *_scannerView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    UIView *_viewfinderView;
}

+ (id)instantiateViewController;
@property(retain, nonatomic) UIView *viewfinderView; // @synthesize viewfinderView=_viewfinderView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VPScannerView *scannerView; // @synthesize scannerView=_scannerView;
@property(retain, nonatomic) UIButton *pairManuallyButton; // @synthesize pairManuallyButton=_pairManuallyButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) NSString *titleMessage; // @synthesize titleMessage=_titleMessage;
@property(copy, nonatomic) CDUnknownBlockType scannedCodeHandler; // @synthesize scannedCodeHandler=_scannedCodeHandler;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)handlePairManuallyButton:(id)arg1;
- (void)handleCancelButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end

