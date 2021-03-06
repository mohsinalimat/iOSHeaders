//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BPSMultipleWatchMigrationView, BPSRemoteWatchView, NSArray;
@protocol BPSWatchMigrationControllerDelegate;

@interface BPSWatchMigrationController : UIViewController
{
    _Bool _iTunes;
    id <BPSWatchMigrationControllerDelegate> _migrationDelegate;
    BPSRemoteWatchView *_watchView;
    BPSMultipleWatchMigrationView *_multipleWatchView;
    NSArray *_migratableDevices;
}

@property(nonatomic) _Bool iTunes; // @synthesize iTunes=_iTunes;
@property(retain, nonatomic) NSArray *migratableDevices; // @synthesize migratableDevices=_migratableDevices;
@property(retain, nonatomic) BPSMultipleWatchMigrationView *multipleWatchView; // @synthesize multipleWatchView=_multipleWatchView;
@property(retain, nonatomic) BPSRemoteWatchView *watchView; // @synthesize watchView=_watchView;
@property(nonatomic) __weak id <BPSWatchMigrationControllerDelegate> migrationDelegate; // @synthesize migrationDelegate=_migrationDelegate;
- (void).cxx_destruct;
- (void)_notifyDelegateShouldMigrateWithData:(id)arg1;
- (void)_saveMigrationPreference:(_Bool)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)shouldBeDisplayedGivenMigrationData:(id)arg1;

@end

