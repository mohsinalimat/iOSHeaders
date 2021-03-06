//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKEnterCurrencyAmountViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAddBankAcountInformationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentPerformActionView-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSDecimalNumber, NSNumberFormatter, NSString, PKContinuousButton, PKEnterCurrencyAmountView, PKEnterValueNewBalanceView, PKPeerPaymentAccount, PKPeerPaymentBankAccountInformation, PKPeerPaymentService, UILabel, UITableView, UITextField;
@protocol PKPerformActionViewDelegate;

@interface PKPerformPeerPaymentTransferToBankActionView : UIView <PKEnterCurrencyAmountViewDelegate, PKPeerPaymentAddBankAcountInformationViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, PKPeerPaymentPerformActionView>
{
    PKPeerPaymentBankAccountInformation *_bankInformation;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_account;
    id <PKPerformActionViewDelegate> _delegate;
    NSDecimalNumber *_currentAmount;
    NSNumberFormatter *_currentAmountFormatter;
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
    PKEnterValueNewBalanceView *_newBalanceView;
    PKContinuousButton *_addAccountButton;
    UILabel *_addAccountDetailLabel;
    UITableView *_tableView;
    NSDecimalNumber *_cardBalance;
    NSDecimalNumber *_minAmount;
    NSDecimalNumber *_maxAmount;
}

@property(copy, nonatomic) NSDecimalNumber *maxAmount; // @synthesize maxAmount=_maxAmount;
@property(copy, nonatomic) NSDecimalNumber *minAmount; // @synthesize minAmount=_minAmount;
@property(copy, nonatomic) NSDecimalNumber *cardBalance; // @synthesize cardBalance=_cardBalance;
@property(retain, nonatomic) PKPeerPaymentAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <PKPerformActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_amountTopPadding;
- (id)_tableView;
- (id)_addAccountDetailLabel;
- (id)_addAccountButton;
- (void)_createSubviews;
- (_Bool)_isCurrentAmountValid;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(_Bool)arg2;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(_Bool)arg2;
- (_Bool)_shouldShakeCard:(id)arg1;
- (void)_presentAddBankAccountViewController;
- (void)_handleEditAccountInformationButtonPressed;
- (void)_addAccountInformation:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_setRightBarButtonEnabledState;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (_Bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)amountTextFieldShouldAcceptTouches:(_Bool)arg1;
@property(readonly, nonatomic) UITextField *amountTextField;
- (void)willDismissViewController;
- (void)saveLastInputValues;
- (id)serviceProviderData;
- (id)pass;
- (id)transactionCurrency;
- (id)transactionAmount;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithAccount:(id)arg1 bankInformation:(id)arg2;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

