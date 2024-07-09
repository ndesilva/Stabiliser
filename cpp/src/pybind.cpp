#include <pybind11/pybind11.h>

#include "pauli/pauli_pybind.h"
#include "stabiliser_state/check_matrix.pybind.h"
#include "stabiliser_state/stabiliser_state_pybind.h"

namespace py = pybind11;
using namespace fst;

namespace fst_pybind {

    void init_pauli(py::module_ &);
    void init_check_matrix(py::module_ &);
    void init_stabiliser_state(py::module_ &);
    
    PYBIND11_MODULE(fast, m)
    {
        init_pauli(m);
        init_check_matrix(m);
        init_stabiliser_state(m);
    }
}