//
//  CCPOViewController.h
//  CCIntegrationKit
//
//  Created by test on 5/12/14.
//  Copyright (c) 2014 Avenues. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCWebViewController : UIViewController <UIWebViewDelegate>
    @property (strong, nonatomic) IBOutlet UIWebView *viewWeb;
    @property (strong, nonatomic) NSString *accessCode;
    @property (strong, nonatomic) NSString *merchantId;
    @property (strong, nonatomic) NSString *orderId;
    @property (strong, nonatomic) NSString *amount;
    @property (strong, nonatomic) NSString *currency;
    @property (strong, nonatomic) NSString *redirectUrl;
    @property (strong, nonatomic) NSString *cancelUrl;
    @property (strong, nonatomic) NSString *rsaKeyUrl;

//@property (strong, nonatomic) NSString *billing_name;
//@property (strong, nonatomic) NSString *billing_address;
//@property (strong, nonatomic) NSString *billing_city;
//@property (strong, nonatomic) NSString *billing_state;
//@property (strong, nonatomic) NSString *billing_zip;
//@property (strong, nonatomic) NSString *billing_country;
//@property (strong, nonatomic) NSString *billing_tel;
//@property (strong, nonatomic) NSString *billing_email;
//@property (strong, nonatomic) NSString *delivery_name;
//@property (strong, nonatomic) NSString *delivery_address;
//@property (strong, nonatomic) NSString *delivery_city;
//@property (strong, nonatomic) NSString *delivery_state;
//@property (strong, nonatomic) NSString *delivery_zip;
//@property (strong, nonatomic) NSString *delivery_country;
//@property (strong, nonatomic) NSString *delivery_tel;

@end
