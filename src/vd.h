K KX(K x);
K dot_monadic(K x);
K Ks(S x);
K make(K a);
K kclone(K a);
extern S d__;
extern I fbs;
K *denameS(S dir_string,S t,I create);
extern C errmsg[256];
I isColonDyadic(K x);
K dot_tetradic(K a,K b,K c,K y);
K dot_tetradic_2(K *g,K b,K c,K y);
K Ki(I x);
K DI(K d,I i);
K *EVP(K e);
K *lookupEVOrCreate(K *p,S k);
I atomI(K a);
K at_ref(K *p,K b,K c,K y);
I args(int n,S *v);
K specialAmendDot(K c,K args);
I countI(K a);
K vf_ex(V q,K g);
K dot(K a,K b);
K collapse(K x);
K cd(K a);
K promote(K a);
K _n();
K ci(K a);
K at(K x,K y);
K of(K a,K b);
K demote(K a);
K lookup(K a,S b);
K newK(I t,I n);
K at_verb(K a,K b);
extern S fnc;
extern V fncp[128];
extern I fnci;
extern __thread I fer;
