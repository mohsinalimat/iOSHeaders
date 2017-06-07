//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <CoreCDPUI/CDPHostInterface-Protocol.h>

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface>
{
    CDUnknownBlockType _viewServiceTerminationBlock;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(copy, nonatomic) CDUnknownBlockType viewServiceTerminationBlock; // @synthesize viewServiceTerminationBlock=_viewServiceTerminationBlock;
- (void).cxx_destruct;
- (double)_keyboardHeightOffset;
- (void)hostKeyboardOffset:(CDUnknownBlockType)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

