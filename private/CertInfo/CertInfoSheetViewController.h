//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDate, NSString;
@protocol CertInfoSheetViewControllerDelegate;

@interface CertInfoSheetViewController : UIViewController
{
    NSString *_serviceName;
    NSString *_trustTitle;
    NSString *_trustSubtitle;
    NSString *_trustPurpose;
    NSDate *_trustExpiration;
    NSArray *_trustProperties;
    id <CertInfoSheetViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <CertInfoSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *trustProperties; // @synthesize trustProperties=_trustProperties;
@property(retain, nonatomic) NSDate *trustExpiration; // @synthesize trustExpiration=_trustExpiration;
@property(retain, nonatomic) NSString *trustPurpose; // @synthesize trustPurpose=_trustPurpose;
@property(retain, nonatomic) NSString *trustSubtitle; // @synthesize trustSubtitle=_trustSubtitle;
@property(retain, nonatomic) NSString *trustTitle; // @synthesize trustTitle=_trustTitle;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_pushDetailsView;
- (void)_setupNavItem;
- (void)_accept;
- (void)_cancel;
- (void)_dismissWithResult:(int)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

@end

