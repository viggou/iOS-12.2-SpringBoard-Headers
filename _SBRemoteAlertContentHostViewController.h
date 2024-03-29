//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import "SBSUIRemoteAlertItemContentHostInterface-Protocol.h"

@class NSString;

@interface _SBRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface>
{
    id _delegate;
    NSString *_serviceClassName;
    _Bool _serviceHasSetPreferredContentSize;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(copy, nonatomic) NSString *serviceClassName; // @synthesize serviceClassName=_serviceClassName;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_getPreferredContentSizeWithReplyBlock:(CDUnknownBlockType)arg1;
- (id)description;

@end

